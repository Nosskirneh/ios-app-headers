//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UAAPIClient.h"

@interface UATagGroupsAPIClient : UAAPIClient
{
}

+ (id)clientWithConfig:(id)arg1 session:(id)arg2;
+ (id)clientWithConfig:(id)arg1;
- (void)performTagGroupsMutation:(id)arg1 path:(id)arg2 audience:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateNamedUser:(id)arg1 tagGroupsMutation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateChannel:(id)arg1 tagGroupsMutation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

