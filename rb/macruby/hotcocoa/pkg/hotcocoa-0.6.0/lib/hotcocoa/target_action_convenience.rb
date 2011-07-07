##
# This module should be mixed into mappings that want to support
# target actions.
module HotCocoa::Mappings::TargetActionConvenience

  ##
  # @todo testing
  def on_action= behavior
    if target && (
                  target.instance_variable_get(:@action_behavior) ||
                  target.instance_variable_get(:@double_action_behavior))

      @object.instance_variable_set(:@action_behavior, behavior)
      @object = target

    else
      @object = Object.new
      @object.instance_variable_set(:@action_behavior, behavior)
      setTarget(@object)
    end

    def @object.perform_action sender
      @action_behavior.call(sender)
    end

    setAction('perform_action:')
  end

  ##
  # @todo testing
  def on_action &behavior
    self.on_action = behavior
    self
  end
end
