//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DERPCachingPagingViewPage-Protocol.h"

@class MiniPlayerItem, NSString;

@interface MiniPlayerItemViewController : UIViewController <DERPCachingPagingViewPage>
{
}

+ (id)viewControllerForSong:(id)arg1 controller:(id)arg2;
- (void)pageWasDiscarded;
@property(readonly, nonatomic) MiniPlayerItem *item;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

