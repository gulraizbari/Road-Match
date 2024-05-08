
using System;
using System.Collections.Generic;
using GridGeneration.Scripts.interfaces;
using UnityEngine;

namespace Features.GridGeneration.Scripts
{
    
    [Serializable]
    public class Cell:ICell
    {
        
         string _id;
         int _row;
         int _col;
         Vector3 _position;
         IGridGenerator _gridGenerator;
         
         
        public int Row => _row;
        public int Col => _col;
        public Vector3 Position => _position;
   
        public void Init(Vector3 pos,int col,int row,IGridGenerator generator)
        {
            _position= pos;
            _row = row;
            _col = col;
            _id = $"{row}{col}";
            _gridGenerator = generator;
        }

        public List<Cell> GetAdjacent(Tile tile)
        {
            return _gridGenerator.FindAdjacentCells(this);
        }
    }
}