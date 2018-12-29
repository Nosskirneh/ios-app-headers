//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApiCommand-Protocol.h"

@class CoreDataContextSaver, NSManagedObjectContext, NSString, Urn;

@interface WaveformCommand : NSObject <ApiCommand>
{
    NSManagedObjectContext *_context;
    CoreDataContextSaver *_saver;
    Urn *_trackUrn;
}

@property(readonly, nonatomic) Urn *trackUrn; // @synthesize trackUrn=_trackUrn;
@property(readonly, nonatomic) CoreDataContextSaver *saver; // @synthesize saver=_saver;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)createWaveform;
- (id)fetchTrack;
- (void)adaptApiWaveform:(id)arg1 withSubscriber:(id)arg2;
- (id)executeWithObject:(id)arg1;
- (id)initWithContext:(id)arg1 saver:(id)arg2 trackUrn:(id)arg3;
- (id)initWithTrackUrn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
