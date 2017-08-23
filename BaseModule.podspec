
Pod::Spec.new do |s|
  s.name             = 'BaseModule'
  s.version          = '0.1.0'
  s.summary          = 'BaseModule'
  s.description      = '基本宏定义/category/功能模块'

  s.homepage         = 'https://github.com/zhb_mymail@163.com/BaseModule'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zhb_mymail@163.com' => 'developzhb@163.com' }
  s.source           = { :git => 'https://github.com/zhb_mymail@163.com/BaseModule.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'BaseModule/Classes/**/*'

  s.subspec 'Category' do |category|
    category.source_files = 'BaseModule/Classes/Category/**/*'
  end

  s.subspec 'Function-module' do |funMd|
    funMd.subspec 'Exception' do |exception|
      exception.source_files = 'BaseModule/Classes/Function-module/Exception/**/*'
    end

    funMd.subspec 'MemoryWatch' do |memoryWatch|
      memoryWatch.source_files = 'BaseModule/Classes/Function-module/MemoryWatch/**/*'
    end

    funMd.subspec 'QRScan' do |qrScan|
      qrScan.source_files = 'BaseModule/Classes/Function-module/QRScan/**/*'
    end

    funMd.subspec 'SandBox' do |sandBox|
      sandBox.source_files = 'BaseModule/Classes/Function-module/SandBox/**/*'
    end
  end

  s.subspec 'Macro' do |macro|
    macro.source_files = 'BaseModule/Classes/Macro/**/*'
  end

  s.subspec 'ThirdClass' do |thirdClass|
    thirdClass.source_files = 'BaseModule/Classes/ThirdClass/**/*'
  end


end


# s.source_files = 'BaseModule/Classes/**/*'
