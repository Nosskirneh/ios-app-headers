//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, OAStackView;

@interface OAStackViewAlignmentStrategy : NSObject
{
    OAStackView *_stackView;
    NSMutableArray *_constraints;
}

+ (id)strategyWithStackView:(id)arg1;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) __weak OAStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (id)lastViewConstraints:(id)arg1 withParentView:(id)arg2;
- (id)firstViewConstraints:(id)arg1 withParentView:(id)arg2;
- (void)alignLastView:(id)arg1;
- (void)alignFirstView:(id)arg1;
- (id)lastMarginRelation;
- (id)firstMarginRelation;
- (id)constraintsAlignView:(id)arg1 afterPreviousView:(id)arg2;
- (id)constraintsalignViewOnOtherAxis:(id)arg1;
- (void)removeAddedConstraints;
@property(readonly, nonatomic) NSArray *addedConstraints;
- (void)alignView:(id)arg1 withPreviousView:(id)arg2;
- (void)addConstraintsOnOtherAxis:(id)arg1;
- (long long)centerAttribute;
- (double)lastMargin;
- (double)firstMargin;
- (id)otherAxisString;
- (id)initWithWithStackView:(id)arg1;

@end

