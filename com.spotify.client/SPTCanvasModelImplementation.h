//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCanvasModel.h"

@class NSString, NSURL;

@interface SPTCanvasModelImplementation : NSObject <SPTCanvasModel>
{
    NSString *_canvasId;
    NSURL *_contentURL;
    NSString *_contentId;
    unsigned long long _type;
    id <SPTArtistEntity> _artist;
    NSURL *_entityURI;
    NSURL *_placeholderURI;
}

+ (unsigned long long)canvasContentTypeFromString:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *placeholderURI; // @synthesize placeholderURI=_placeholderURI;
@property(readonly, copy, nonatomic) NSURL *entityURI; // @synthesize entityURI=_entityURI;
@property(readonly, nonatomic) id <SPTArtistEntity> artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCanvasId:(id)arg1 contentURL:(id)arg2 contentId:(id)arg3 type:(unsigned long long)arg4 artist:(id)arg5 entityURI:(id)arg6 placeholderURI:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

