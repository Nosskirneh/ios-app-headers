//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOContentView-Protocol.h"

@class NSCoder;
@protocol GIMContentViewObject;

@protocol GIMContentView <GOOContentView>
- (void)updateViewWithObject:(id)arg1;
- (void)updateGimmifiedViewWithObject:(id <GIMContentViewObject>)arg1;
- (id)initWithCoder:(NSCoder *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initGimmifiedWithFrame:(struct CGRect)arg1;
@end

