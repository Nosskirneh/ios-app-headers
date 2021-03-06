//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRDeveloperSettingsModelItem-Protocol.h"

@class NSString;

@interface DZRDeveloperSettingsModelToggleItem : NSObject <DZRDeveloperSettingsModelItem>
{
    NSString *_title;
    CDUnknownBlockType _action;
    CDUnknownBlockType _condition;
}

@property(copy, nonatomic) CDUnknownBlockType condition; // @synthesize condition=_condition;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)actionForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithTitle:(id)arg1 condition:(CDUnknownBlockType)arg2 action:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

