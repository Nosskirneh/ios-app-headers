//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKFeedViewControllerGenericContext.h"

@class NSString;
@protocol ABKFeedViewControllerPopoverContextDelegate;

@interface ABKFeedViewControllerPopoverContext : ABKFeedViewControllerGenericContext
{
    id <ABKFeedViewControllerPopoverContextDelegate> _closeButtonDelegate;
}

@property __weak id <ABKFeedViewControllerPopoverContextDelegate> closeButtonDelegate; // @synthesize closeButtonDelegate=_closeButtonDelegate;
- (void).cxx_destruct;

// Remaining properties
@property(retain) NSString *navigationBarTitle; // @dynamic navigationBarTitle;

@end
