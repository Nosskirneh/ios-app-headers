//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Player : NSObject
{
    struct OpaqueAUGraph *outputGraph;
    struct OpaqueAudioComponentInstance *eqUnit;
    struct OpaqueAudioComponentInstance *outputUnit;
    _Bool active;
}

@end
