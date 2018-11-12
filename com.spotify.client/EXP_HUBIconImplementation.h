//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EXP_HUBAutoEquatable.h"

#import "EXP_HUBIcon-Protocol.h"

@class NSString;
@protocol EXP_HUBIconImageResolver;

@interface EXP_HUBIconImplementation : EXP_HUBAutoEquatable <EXP_HUBIcon>
{
    _Bool _isPlaceholder;
    NSString *_identifier;
    id <EXP_HUBIconImageResolver> _imageResolver;
}

+ (id)ignoredAutoEquatablePropertyNames;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> imageResolver; // @synthesize imageResolver=_imageResolver;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)imageWithSize:(struct CGSize)arg1 color:(id)arg2;
- (id)initWithIdentifier:(id)arg1 imageResolver:(id)arg2 isPlaceholder:(_Bool)arg3;

@end

