use Module::Build;
my $build = Module::Build->new
  (
   module_name => 'Text::ASCIITable',
   license => 'perl',
   requires => {
                'perl'           => '5.6.0',
                'Carp'						=> 0,
               },
		create_makefile_pl => 'passthrough',
  );
$build->create_build_script;
