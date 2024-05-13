using System.Collections;
using System.Collections.Generic;
using Sablo.Gameplay.Pathfinding;
using UnityEngine;

namespace Sablo.Gameplay.Movement
{
    public class InputController: MonoBehaviour, IInputController
    {
        [SerializeField] private GameObject _player;
        private Node startNode;
        private Node targetNode;
        private float maxDistance = 75.0f;
        
        public IPathfinding PathfindingHandler { get; set; }
        public IGridGenerator GridGeneratorHandler { get; set; }

        public void SetStartNode(Node node)
        {
            startNode = node;
        }
 
        private void Update()
        {
            if (Input.GetMouseButtonDown(0))
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit, maxDistance))
                {
                    Node selectedNode = hit.collider.GetComponent<Node>();
                    if (selectedNode != null)
                    {
                        if (startNode == null)
                        {
                            startNode = selectedNode;
                        }
                        else
                        {
                            targetNode = selectedNode;
                            var path = PathfindingHandler.FindShortestPath(startNode, targetNode);
                            StartCoroutine(MoveCharacter(path));

                            startNode = null;
                            targetNode = null;
                        }
                    }
                }
            }
        }
        
        private IEnumerator MoveCharacter(List<Node> path)
        {
            foreach (var node in path)
            {
                _player.transform.position = new Vector3(node.Position.x, 1, node.Position.z);
                yield return new WaitForSeconds(0.25f);
            }
        }
        
    }
}