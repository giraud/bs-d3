/* Quick'n dirty bindings to JsDom, for tests only */
[@bs.module "jsdom"] [@bs.new] external make : string => 'a = "JSDOM";

let body = dom => dom##window##document##body;
