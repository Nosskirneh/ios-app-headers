//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActionSheet.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSMutableArray, NSString, SHKItem;
@protocol SHKShareItemDelegate;

@interface SHKActionSheet : UIActionSheet <UIActionSheetDelegate>
{
    NSMutableArray *sharers;
    SHKItem *item;
    id <SHKShareItemDelegate> shareDelegate;
}

+ (id)actionSheetForItem:(id)arg1 hideSharers:(id)arg2;
+ (id)actionSheetForItem:(id)arg1;
+ (id)actionSheetForType:(int)arg1 hideSharers:(id)arg2;
+ (id)actionSheetForType:(int)arg1;
@property(retain) id <SHKShareItemDelegate> shareDelegate; // @synthesize shareDelegate;
@property(retain) NSMutableArray *sharers; // @synthesize sharers;
@property(retain) SHKItem *item; // @synthesize item;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

