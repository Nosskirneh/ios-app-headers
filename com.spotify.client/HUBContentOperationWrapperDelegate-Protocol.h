//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HUBContentOperationWrapper, NSError;

@protocol HUBContentOperationWrapperDelegate
- (void)contentOperationWrapperRequiresRescheduling:(HUBContentOperationWrapper *)arg1;
- (void)contentOperationWrapper:(HUBContentOperationWrapper *)arg1 didFailWithError:(NSError *)arg2;
- (void)contentOperationWrapperDidFinish:(HUBContentOperationWrapper *)arg1;
@end

