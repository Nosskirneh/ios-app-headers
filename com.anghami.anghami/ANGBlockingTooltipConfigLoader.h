//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGConfigLoader.h"

@class NSArray;

@interface ANGBlockingTooltipConfigLoader : ANGConfigLoader
{
    NSArray *_configArray;
}

+ (id)getACRButtonTooltipConfig;
+ (_Bool)shouldShowACRButtonTooltip;
+ (id)getHomePageMusicLangTooltipConfig;
+ (_Bool)shoudShowHomePageMusicLangToolTip;
+ (id)getRemoveAdsTooltipConfig;
+ (_Bool)shoudShowRemoveAdsToolTip;
+ (id)getPlayerDownloadTooltipConfig;
+ (_Bool)shoudShowPlayerDownloadToolTip;
+ (void)deleteAllTooltipConfig;
+ (void)updateToolTipConfigs:(id)arg1;
+ (void)clearAll;
+ (void)loadConfigurationWithTooltipsHash:(id)arg1;
+ (id)getLastShownDatesForCurrentConfig;
@property(readonly) NSArray *configArray; // @synthesize configArray=_configArray;
- (void).cxx_destruct;
- (_Bool)internalProcessData:(id)arg1;
- (id)additionalParams;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1;

@end

