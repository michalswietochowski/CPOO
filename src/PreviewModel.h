/*
 * PreviewModel.h
 *
 *  Created on: 24-03-2013
 *      Author: tolkjen
 */

#ifndef PREVIEWMODEL_H_
#define PREVIEWMODEL_H_

#include "BackgroundModel.h"

using namespace std;
using namespace cv;

// ----------------------------------------------------------------------------
// PreviewModel class
//
// Instance of this class returns unchanged video frame and works as a preview
// of original video sequence.
class PreviewModel: public BackgroundModel {
public:
	PreviewModel();

	virtual void insert(Mat &m);
	virtual Mat& resultingFrame();

private:
	Mat _frame;
};

#endif /* PREVIEWMODEL_H_ */
