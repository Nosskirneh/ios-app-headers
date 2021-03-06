//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;

@interface MDCAlertActionManager : NSObject
{
    NSMutableArray *_actions;
    NSMapTable *_actionButtons;
}

@property(retain, nonatomic) NSMapTable *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)makeButtonForAction:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)createButtonForAction:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)actionForButton:(id)arg1;
- (id)buttonForAction:(id)arg1;
- (_Bool)hasAction:(id)arg1;
- (void)addAction:(id)arg1;
@property(readonly, nonatomic) NSArray *buttonsInActionOrder; // @dynamic buttonsInActionOrder;
- (id)init;

@end

