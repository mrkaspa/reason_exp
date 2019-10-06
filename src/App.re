/* State declaration */
type state = {
  count: int,
  show: bool,
};

/* Action declaration */
type action =
  | Click
  | Toggle;

[@react.component]
let make = (~greeting) => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | Click => {...state, count: state.count + 1}
        | Toggle => {...state, show: !state.show}
        },
      {count: 0, show: true},
    );

  let message =
    "You've clicked this " ++ string_of_int(state.count) ++ " times(s)";
  <div>
    <div style={ReactDOMRe.Style.make(~width="100%", ~height="300px", ())}>
      <Map
        bootstrapURLKeys={Map.bootstrapURLKeys(
          ~key="AIzaSyCzMvSw0Kku8MhtFV-ZrJV4Za6x5wEEH8Q",
        )}
        zoom=11
        center={Map.center(~lat=59.95, ~lng=30.33)}
      />
    </div>
    <div>
      <Material.Button color="primary">
        {ReasonReact.string("Load map")}
      </Material.Button>
    </div>
    <button onClick={_event => dispatch(Click)}>
      {ReasonReact.string(message)}
    </button>
    <button onClick={_event => dispatch(Toggle)}>
      {ReasonReact.string("Toggle greeting")}
    </button>
    {state.show ? ReasonReact.string(greeting) : ReasonReact.null}
  </div>;
};
