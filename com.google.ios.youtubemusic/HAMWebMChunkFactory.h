//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMChunkFactory-Protocol.h"

@class NSString;
@protocol HAMFormat;

@interface HAMWebMChunkFactory : NSObject <HAMChunkFactory>
{
    id <HAMFormat> _format;
}

- (void).cxx_destruct;
- (id)indexChunkWithURL:(id)arg1;
- (id)initializationChunkWithURL:(id)arg1;
- (id)mediaChunkWithURL:(id)arg1 segmentNumber:(long long)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (id)init;
- (id)initWithFormat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

