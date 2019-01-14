module Scope = {
  type t;
};
module Patch = {
  type t;
};
module Overload = {
  type t;
};

/* patch */
[@bs.module "patchinko"] external p: 'a => Patch.t = "P";

/* scope */
[@bs.module "patchinko"] external s: 'a => Scope.t = "S";

/* patch and scope */
[@bs.module "patchinko"] external ps: 'a => Patch.t = "PS";

/* delete */
[@bs.module "patchinko"] external del: 'a => unit = "D";

/* overload */
[@bs.module "patchinko"] external ov: 'a => Overload.t = "constant";

/* immutable */
[@bs.module "patchinko"] external im: 'a => Overload.t = "immutable";