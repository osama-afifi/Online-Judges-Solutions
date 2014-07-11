using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.ComponentModel.DataAnnotations;

namespace CodeFirst.Models
{
    public class Task
    {
        [Key]
        public int TaskId { get; set; }
        public int SheetId { get; set; }
        public string HoursDone { get; set; }
        public int StatusId { get; set; }
        public string Description { get; set; }
        public string Notes { get; set; }
    }
}