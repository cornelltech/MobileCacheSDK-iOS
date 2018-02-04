#
# Be sure to run `pod lib lint MobileCacheSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MobileCacheSDK'
  s.version          = '0.1.0'
  s.summary          = 'A short description of MobileCacheSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/jdkizer9/MobileCacheSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jdkizer9' => 'jdkizer9@users.noreply.github.com' }
  s.source           = { :git => 'https://github.com/jdkizer9/MobileCacheSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  s.subspec 'Core' do |core|
    core.source_files = 'Source/Core/**/*'
    # core.dependency 'OMHClient', '~> 0.1'
    core.dependency 'SecureQueue'
    core.dependency 'Alamofire', '~> 4'
  end

  # s.subspec 'RKSupport' do |rks|
  #   rks.source_files = 'Source/RKSupport/**/*'
  #   rks.dependency 'MobileCacheSDK/Core'
  #   rks.dependency 'ResearchKit', '~> 1.5'
  #   rks.dependency 'ResearchSuiteExtensions', '~> 0.7'
  # end

  s.subspec 'RSTBSupport' do |rstb|
    rstb.source_files = 'Source/RSTBSupport/**/*'
    rstb.dependency 'MobileCacheSDK/Core'
    # rstb.dependency 'MobileCacheSDK/RKSupport'
    rstb.dependency 'ResearchSuiteTaskBuilder'
    rstb.dependency 'Gloss', '~> 1'
    rstb.dependency 'ResearchSuiteExtensions', '~> 0.7'
  end

  s.subspec 'RSRPSupport' do |rsrp|
    rsrp.source_files = 'Source/RSRPSupport/**/*'
    rsrp.dependency 'MobileCacheSDK/Core'
    rsrp.dependency 'ResearchSuiteResultsProcessor', '~> 0.8'
    rsrp.dependency 'Gloss', '~> 1'
  end

end
