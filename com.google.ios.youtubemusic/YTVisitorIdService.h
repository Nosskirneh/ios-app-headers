//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

@class GIMMe, YTApiaryResourceParser;

@interface YTVisitorIdService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_resourceParser;
}

- (void).cxx_destruct;
- (void)makeRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end
