//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOAdViewDelegate.h"

@class GADOAdAppViewController;

@interface GADOAdAppAdViewDelegate : GADOAdViewDelegate
{
    GADOAdAppViewController *_adAppViewController;
}

- (void).cxx_destruct;
- (id)CSIForGMSGHandler:(id)arg1;
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adViewDidFinishLoad:(id)arg1;
- (void)adViewDidStartLoad:(id)arg1;
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)initWithAdAppViewController:(id)arg1;

@end

