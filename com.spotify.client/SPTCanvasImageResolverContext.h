//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTCanvasImageResolverContext : NSObject
{
    long long _resolverType;
    CDUnknownBlockType _completionBlock;
    id <SPTCanvasModel> _canvasModel;
}

@property(readonly, nonatomic) id <SPTCanvasModel> canvasModel; // @synthesize canvasModel=_canvasModel;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) long long resolverType; // @synthesize resolverType=_resolverType;
- (void).cxx_destruct;
- (id)initWithResolverType:(long long)arg1 canvasModel:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

