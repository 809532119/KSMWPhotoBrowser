//
//  UIImage+MWPhotoBrowser.h
//  Pods
//
//  Created by Michael Waterfall on 05/07/2015.
//
//

#import <Foundation/Foundation.h>

@interface UIImage (MWPhotoBrowser)

+ (UIImage *)imageForResourcePath:(NSString *)path ofType:(NSString *)type;
+ (UIImage *)clearImageWithSize:(CGSize)size;

@end
