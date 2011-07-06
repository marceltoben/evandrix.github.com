class BehaviorsTestView < NSView
  include HotCocoa::Behaviors
end
class BehaviorsTest < NSNetServiceBrowser
  include HotCocoa::Behaviors
end

class TestBehaviors < MiniTest::Unit::TestCase

  def test_inherits_custom_methods
    assert_respond_to BehaviorsTest.new, :search_for_domains
  end

  def test_inherits_delegate_methods
    assert_respond_to BehaviorsTest.new, :did_find_domain
  end

  def test_inherits_bindings
    assert_respond_to BehaviorsTestView.new, :hidden=
  end

end
