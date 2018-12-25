//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

#import "GWADependencyGraphComponent-Protocol.h"

@class NSMutableArray, NSString;

@interface GWATableCellView : UIStackView <GWADependencyGraphComponent>
{
    NSMutableArray *_components;
}

+ (void)populateComponents:(id)arg1 andViews:(id)arg2 fromCell:(id)arg3;
+ (double)heightForView:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (void)unRegisterWithDependencyGraph:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (id)initWithTableCell:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

