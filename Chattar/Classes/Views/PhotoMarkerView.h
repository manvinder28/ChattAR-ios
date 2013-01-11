//
//  PhotoMarkerView.h
//  Chattar
//
//  Created by kirill on 1/9/13.
//
//

#import <UIKit/UIKit.h>
#import "AsyncImageView.h"
#import "UserAnnotation.h"
#import "MapMarkerView.h"

@protocol PhotoMarkerProtocol <NSObject>

@required
-(void)makeFullScreenView:(UIView*)view;

@end

@interface PhotoMarkerView : MKAnnotationView<UIGestureRecognizerDelegate>{
    AsyncImageView* fullPhoto;
    AsyncImageView* thumbnailPhoto;
}

@property (nonatomic,assign) id<PhotoMarkerProtocol> delegate;

@end
