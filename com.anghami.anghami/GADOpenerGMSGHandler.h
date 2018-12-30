//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADOpener;

@interface GADOpenerGMSGHandler : GADGMSGHandler
{
    GADOpener *_opener;
}

+ (id)subActionBlockDictionary;
+ (id)actionBlockDictionary;
@property(retain, nonatomic) GADOpener *opener; // @synthesize opener=_opener;
- (void).cxx_destruct;
- (_Bool)shouldUseCustomClose:(id)arg1;
- (unsigned long long)orientationFromParams:(id)arg1;
- (id)URLFromParams:(id)arg1 key:(id)arg2;
- (void)adView:(id)arg1 actionOpenAppLink:(id)arg2;
- (void)adView:(id)arg1 actionOpenApp:(id)arg2;
- (void)adView:(id)arg1 actionExpand:(id)arg2;
- (void)adView:(id)arg1 actionOpenWebApp:(id)arg2;
- (void)adView:(id)arg1 actionOpenInlineSafari:(id)arg2;
- (void)adView:(id)arg1 actionOpenBrowser:(id)arg2;
- (void)adView:(id)arg1 fetchInAppStore:(id)arg2;
- (void)adView:(id)arg1 actionOpenInAppStore:(id)arg2;
- (void)adView:(id)arg1 didReceiveOpenNotification:(id)arg2;
- (void)adView:(id)arg1 didReceiveClickNotification:(id)arg2;
- (id)initWithOpener:(id)arg1;

@end

