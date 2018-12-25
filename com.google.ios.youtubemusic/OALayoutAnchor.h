//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface OALayoutAnchor : NSObject
{
    UIView *_view;
    long long _attribute;
}

+ (void)load;
@property(nonatomic) long long attribute; // @synthesize attribute=_attribute;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)viewToAddConstraintOnForFirstView:(id)arg1 secondView:(id)arg2;
- (void)addConstraint:(id)arg1 betweenView:(id)arg2 otherView:(id)arg3;
- (id)constraintToAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1;
- (id)constraintEqualToAnchor:(id)arg1;
- (id)initWithAttribute:(long long)arg1 view:(id)arg2;

@end
