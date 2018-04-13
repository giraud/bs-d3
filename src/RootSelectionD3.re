[@bs.module "d3-selection"] external selection : unit => SelectionD3.t = "";
[@bs.module "d3-selection"] external selectNode : Dom.node => SelectionD3.t = "select";
[@bs.module "d3-selection"] external select : string => SelectionD3.t = "";
