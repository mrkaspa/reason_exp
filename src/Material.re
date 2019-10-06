module Button = {
  [@bs.module "@material-ui/core/Button/Button"] [@react.component]
  external make: (~color: string, ~children: React.element) => React.element =
    "default";
};
