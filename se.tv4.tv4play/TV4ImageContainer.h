//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TV4ImageContainer : NSObject
{
}

+ (id)stringFromSize:(struct CGSize)arg1;
+ (void)setImage:(id)arg1 forSize:(struct CGSize)arg2 andUrlString:(id)arg3;
+ (id)cache;
+ (id)cachedImageWithSize:(struct CGSize)arg1 andUrlString:(id)arg2;
+ (id)logArea;
- (id)imageWithSize:(struct CGSize)arg1 andUrlString:(id)arg2;
- (void)setImage:(id)arg1 forSize:(struct CGSize)arg2 andUrlString:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end

