//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@protocol GADActiveViewGMSGHandlerDelegate;

@interface GADActiveViewGMSGHandler : GADGMSGHandler
{
    id <GADActiveViewGMSGHandlerDelegate> _delegate;
}

+ (id)actionBlockDictionary;
@property(nonatomic) __weak id <GADActiveViewGMSGHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didReceiveActiveViewUntrackActiveViewNotification:(id)arg2;
- (void)adView:(id)arg1 didReceiveActiveViewTrackActiveViewNotification:(id)arg2;
- (void)adView:(id)arg1 didReceiveActiveViewVisibilityChangedNotification:(id)arg2;

@end

