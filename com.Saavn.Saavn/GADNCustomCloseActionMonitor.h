//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNCloseButton, GADNObserverCollection;
@protocol GADNEventContextSource;

@interface GADNCustomCloseActionMonitor : NSObject
{
    GADNObserverCollection *_observers;
    GADNCloseButton *_closeButton;
    _Bool _customCloseBlocked;
    id <GADNEventContextSource> _messageSource;
}

- (void).cxx_destruct;
- (void)handleUpdateCustomCloseAction:(id)arg1;
- (id)initWithCloseButton:(id)arg1 messageSource:(id)arg2 customCloseBlocked:(_Bool)arg3;

@end
