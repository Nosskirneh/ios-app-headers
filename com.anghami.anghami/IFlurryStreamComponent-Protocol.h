//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol IFlurryStreamComponent, IFlurryStreamMessage;

@protocol IFlurryStreamComponent <NSObject>
- (void)registerNextStageComponent:(id <IFlurryStreamComponent>)arg1;
- (NSArray *)supportedFrameTypes;
- (void)sendStreamMessage:(id <IFlurryStreamMessage>)arg1;
@end

