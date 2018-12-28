//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AEModule.h"

@class AEManagedValue, AERenderer;

@interface AESubrendererModule : AEModule
{
    int _numberOfOutputChannels;
    AEManagedValue *_subrendererValue;
}

@property(retain, nonatomic) AEManagedValue *subrendererValue; // @synthesize subrendererValue=_subrendererValue;
@property(nonatomic) int numberOfOutputChannels; // @synthesize numberOfOutputChannels=_numberOfOutputChannels;
- (void).cxx_destruct;
- (void)rendererDidChangeSampleRate;
@property(retain, nonatomic) AERenderer *subrenderer; // @dynamic subrenderer;
- (id)initWithRenderer:(id)arg1 subrenderer:(id)arg2;

@end

