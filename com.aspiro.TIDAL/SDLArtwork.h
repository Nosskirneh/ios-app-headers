//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLFile.h"

@class UIImage;

@interface SDLArtwork : SDLFile
{
    UIImage *_image;
}

+ (id)sdl_md5HashFromNSData:(id)arg1;
+ (id)sdl_fileExtensionForImageFormat:(unsigned long long)arg1;
+ (id)sdl_dataForUIImage:(id)arg1 imageFormat:(unsigned long long)arg2;
+ (id)persistentArtworkWithImage:(id)arg1 asImageFormat:(unsigned long long)arg2;
+ (id)persistentArtworkWithImage:(id)arg1 name:(id)arg2 asImageFormat:(unsigned long long)arg3;
+ (id)artworkWithImage:(id)arg1 asImageFormat:(unsigned long long)arg2;
+ (id)artworkWithImage:(id)arg1 name:(id)arg2 asImageFormat:(unsigned long long)arg3;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)isEqualToArtwork:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithImage:(id)arg1 persistent:(_Bool)arg2 asImageFormat:(unsigned long long)arg3;
- (id)initWithImage:(id)arg1 name:(id)arg2 persistent:(_Bool)arg3 asImageFormat:(unsigned long long)arg4;

@end

