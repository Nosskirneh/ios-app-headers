//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class ANGPlayQueue;

@interface ANGReportPlayQueueLoader : Loader
{
    ANGPlayQueue *_serverPlayQueue;
}

@property(readonly) ANGPlayQueue *serverPlayQueue; // @synthesize serverPlayQueue=_serverPlayQueue;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (id)initWithPlayQueue:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;

@end

