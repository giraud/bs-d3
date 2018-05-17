/* Quick'n dirty bindings to JsDom, for tests only */

[@bs.module "jsdom"] [@bs.new] external make : string => 'a = "JSDOM";

let attachD3 = dom => D3.Selection.selectNode(dom##window##document##body);
