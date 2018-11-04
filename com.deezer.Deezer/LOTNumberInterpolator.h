//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOTValueInterpolator.h"

@protocol LOTNumberValueDelegate;

@interface LOTNumberInterpolator : LOTValueInterpolator
{
    id <LOTNumberValueDelegate> _delegate;
}

@property(nonatomic) __weak id <LOTNumberValueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setValueDelegate:(id)arg1;
- (_Bool)hasDelegateOverride;
- (double)floatValueForFrame:(id)arg1;

@end

