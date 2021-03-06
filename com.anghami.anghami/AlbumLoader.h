//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentSectionLoader.h"

@class ANGAlbum, NSDictionary;

@interface AlbumLoader : ContentSectionLoader
{
    ANGAlbum *_album;
    NSDictionary *_parameters;
    ANGAlbum *_requestedAlbum;
}

@property(copy, nonatomic) ANGAlbum *requestedAlbum; // @synthesize requestedAlbum=_requestedAlbum;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly) ANGAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (_Bool)didHandleParsingData:(id)arg1;
- (id)requestParams;
- (id)actionString;
- (int)type;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1 album:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 album:(id)arg2 andParameters:(id)arg3;

@end

