//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TV4StringHelper : NSObject
{
}

+ (id)underLineString:(id)arg1;
+ (void)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 text:(id)arg5 color:(id)arg6;
+ (void)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 text:(id)arg4 color:(id)arg5;
+ (void)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 text:(id)arg3 color:(id)arg4;
+ (void)drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 text:(id)arg4 color:(id)arg5;
+ (void)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 text:(id)arg5 color:(id)arg6;
+ (void)drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2 text:(id)arg3 color:(id)arg4;
+ (struct CGSize)sizeWithFont:(id)arg1 constrainedSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 text:(id)arg4;
+ (struct CGSize)sizeWithFont:(id)arg1 constrainedSize:(struct CGSize)arg2 text:(id)arg3;
+ (struct CGSize)sizeWithFont:(id)arg1 text:(id)arg2;

@end

