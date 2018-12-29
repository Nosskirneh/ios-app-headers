//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ActionSheetElement, NSArray;

@interface ActionSheetConfiguration : NSObject
{
    NSArray *_actionElements;
    ActionSheetElement *_dismissElement;
    unsigned long long _popoverPosition;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _dismissBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) unsigned long long popoverPosition; // @synthesize popoverPosition=_popoverPosition;
@property(readonly, nonatomic) ActionSheetElement *dismissElement; // @synthesize dismissElement=_dismissElement;
@property(readonly, nonatomic) NSArray *actionElements; // @synthesize actionElements=_actionElements;
- (void).cxx_destruct;
- (id)initWithActionElements:(id)arg1 dismissElement:(id)arg2 popoverPosition:(unsigned long long)arg3 actionBlock:(CDUnknownBlockType)arg4 dismissBlock:(CDUnknownBlockType)arg5;
- (id)initWithActionElements:(id)arg1 dismissElement:(id)arg2 actionBlock:(CDUnknownBlockType)arg3 dismissBlock:(CDUnknownBlockType)arg4;

@end
