//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseNetworkService.h"

@class GIMMe, GTMLogger;

@interface YTPingService : YTBaseNetworkService
{
    GTMLogger *_pingLogger;
}

- (void).cxx_destruct;
- (void)performPingHTTPRequest:(id)arg1 withAuthorizer:(id)arg2 successBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

