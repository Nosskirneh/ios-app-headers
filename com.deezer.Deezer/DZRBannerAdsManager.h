//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DZRBannerAdsManager : NSObject
{
    NSDictionary *_settings;
}

@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)keyForPlacement:(long long)arg1;
- (void)disableBannerForPlacement:(long long)arg1;
- (_Bool)shouldDisplayBannerAt:(long long)arg1;
- (id)settingsForPlacement:(long long)arg1;
- (void)setParameters:(id)arg1;
- (id)init;

@end

