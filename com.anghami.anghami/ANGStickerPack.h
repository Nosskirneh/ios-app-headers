//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface ANGStickerPack : NSObject
{
    NSString *_originalSpriteLocation;
    NSString *_associatedLogoImageLocation;
    NSArray *_imagesLocation;
    NSDate *_creationDate;
    NSArray *_relatedSongs;
}

+ (id)fullPathForStickerName:(id)arg1;
@property(retain, nonatomic) NSArray *relatedSongs; // @synthesize relatedSongs=_relatedSongs;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSArray *imagesLocation; // @synthesize imagesLocation=_imagesLocation;
@property(retain, nonatomic) NSString *associatedLogoImageLocation; // @synthesize associatedLogoImageLocation=_associatedLogoImageLocation;
@property(retain, nonatomic) NSString *originalSpriteLocation; // @synthesize originalSpriteLocation=_originalSpriteLocation;
- (void).cxx_destruct;
- (_Bool)isCorrupted;
- (void)removeRelatedSong:(id)arg1;
- (void)setRelatedSong:(id)arg1;
- (_Bool)deleteFromDisk;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)stickersArray;

@end

