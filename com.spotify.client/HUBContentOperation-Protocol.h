//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError;
@protocol HUBContentOperationDelegate, HUBViewModelBuilder;

@protocol HUBContentOperation
- (void)performForViewModelBuilder:(id <HUBViewModelBuilder>)arg1 previousError:(NSError *)arg2;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate;
@end

