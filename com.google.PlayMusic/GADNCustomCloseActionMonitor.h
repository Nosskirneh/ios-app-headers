//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNAd, GADNCloseButton, GADNObserverCollection;

@interface GADNCustomCloseActionMonitor : NSObject
{
    GADNObserverCollection *_observers;
    GADNCloseButton *_closeButton;
    _Bool _customCloseBlocked;
    GADNAd *_ad;
}

- (void).cxx_destruct;
- (void)handleUpdateCustomCloseAction:(id)arg1;
- (id)initWithAd:(id)arg1 closeButton:(id)arg2 messageSource:(id)arg3 customCloseBlocked:(_Bool)arg4;

@end
