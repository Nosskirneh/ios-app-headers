//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError;
@protocol EXP_HUBContentOperationDelegate, EXP_HUBViewModelBuilder;

@protocol EXP_HUBContentOperation
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate;
- (void)performForViewModelBuilder:(id <EXP_HUBViewModelBuilder>)arg1 previousError:(NSError *)arg2;
@end

